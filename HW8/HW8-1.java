package booking;
import java.util.Arrays;
class List {
    Record[] records;
    int count;

    public List() {
        this(5);
    }

    public List(int x) {
        records = new Record[x];
        count = 0;
    }

    void add(Record record) {
        if (count == records.length) {
            records = Arrays.copyOf(records, records.length * 2);
        }
        records[count] = record;
        count++;
    }

    boolean remove(String id) {
        for (int i = 0; i < count; i++) {
            if (records[i].id.equals(id)) {
                // เลื่อนสมาชิกทั้งหมดมาข้างหน้า
                for (int j = i; j < count - 1; j++) {
                    records[j] = records[j + 1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    Record getFirst() {
        if (count > 0) {
            return records[0];
        }
        return null;
    }

    boolean isEmpty() {
        return count == 0;
    }

    int size() {
        return count;
    }

    boolean hasRecord(String id) {
        for (int i = 0; i < count; i++) {
            if (records[i].id.equals(id)) {
                return true;
            }
        }
        return false;
    }

    boolean hasDuplicateBooking(String name) {
        int nameCount = 0;
        for (int i = 0; i < count; i++) {
            if (records[i].name.equals(name)) {
                nameCount++;
            }
        }
        return nameCount > 1;
    }

    boolean hasDoubleBooking() {
        return count > 1;
    }
}
