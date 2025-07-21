package booking;
import java.util.Arrays;
class ArrayCollection {
    List[] lists;
    int[] tableNumbers;
    int count;

    public ArrayCollection() {
        this(5);
        System.out.println("Collection created.");
    }

    public ArrayCollection(int x) {
        lists = new List[x];
        tableNumbers = new int[x];
        count = 0;
    }

    void add(int tableNo, Record record) {
        int index = findTableIndex(tableNo);
        if (index == -1) {
            // โต๊ะใหม่
            if (count == lists.length) {
                lists = Arrays.copyOf(lists, lists.length * 2);
                tableNumbers = Arrays.copyOf(tableNumbers, tableNumbers.length * 2);
            }
            lists[count] = new List();
            tableNumbers[count] = tableNo;
            lists[count].add(record);
            count++;
        } else {
            // โต๊ะที่มีอยู่แล้ว
            lists[index].add(record);
        }
    }

    boolean remove(String id) {
        for (int i = 0; i < count; i++) {
            if (lists[i].remove(id)) {
                // ถ้า List ว่างเปล่า ให้ลบโต๊ะออก
                if (lists[i].isEmpty()) {
                    for (int j = i; j < count - 1; j++) {
                        lists[j] = lists[j + 1];
                        tableNumbers[j] = tableNumbers[j + 1];
                    }
                    count--;
                }
                return true;
            }
        }
        return false;
    }

    int findTableIndex(int tableNo) {
        for (int i = 0; i < count; i++) {
            if (tableNumbers[i] == tableNo) {
                return i;
            }
        }
        return -1;
    }

    String checkBookingType(int tableNo) {
        int index = findTableIndex(tableNo);
        if (index == -1) {
            return "No booking found";
        }

        List tableList = lists[index];
        if (tableList.hasDoubleBooking()) {
            // ตรวจสอบว่ามี duplicate booking หรือไม่
            for (int i = 0; i < tableList.count - 1; i++) {
                for (int j = i + 1; j < tableList.count; j++) {
                    if (tableList.records[i].name.equals(tableList.records[j].name)) {
                        return "Duplicate booking";
                    }
                }
            }
            return "Double booking";
        }
        return "Single booking";
    }

    Record getCurrentBooking(int tableNo) {
        int index = findTableIndex(tableNo);
        if (index != -1) {
            return lists[index].getFirst();
        }
        return null;
    }
}
