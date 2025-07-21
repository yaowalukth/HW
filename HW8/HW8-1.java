package booking;
import java.util.Scanner;

public class main {
    private final ArrayCollection bookings;
    private final Set bookedTables;
    private final Scanner scanner;

    public main() {
        bookings = new ArrayCollection();
        bookedTables = new Set();
        scanner = new Scanner(System.in);
    }

    public void addBooking() {
        System.out.println("=== เพิ่มการจอง ===");
        System.out.print("Name: ");
        String name = scanner.nextLine();
        System.out.print("No.: ");
        int tableNo = Integer.parseInt(scanner.nextLine());
        System.out.print("Date: ");
        String date = scanner.nextLine();
        System.out.print("Time: ");
        String time = scanner.nextLine();

        Record record = new Record(name, String.valueOf(tableNo), date, time);
        bookings.add(tableNo, record);
        bookedTables.add(tableNo);
        
        System.out.println(" ");
        System.out.println("ID: " + record.id);
        System.out.println("No.: " + record.no);
        System.out.println("Date: " + record.date);
        System.out.println("Time: " + record.time);
        System.out.println("BookingSuccess");
    }

    public void cancelBooking() {
        System.out.println("=== ยกเลิกการจอง ===");
        System.out.print("ID: ");
        String id = scanner.nextLine();

        if (bookings.remove(id)) {
            System.out.println("ID: " + id + " Canceled.");
            System.out.println("CancelSuccess");
        } else {
            System.out.println("ไม่พบการจองนี้");
        }
    }

    public void checkBooking() {
        System.out.println("=== ตรวจสอบการจอง ===");
        System.out.print("No.: ");
        int tableNo = Integer.parseInt(scanner.nextLine());

        String bookingType = bookings.checkBookingType(tableNo);
        System.out.println(bookingType);
    }

    public void showCurrentBookings() {
        System.out.println("=== รายการจองปัจจุบัน ===");
        for (int i = 0; i < bookings.count; i++) {
            int tableNo = bookings.tableNumbers[i];
            Record current = bookings.getCurrentBooking(tableNo);
            if (current != null) {
                System.out.println("โต๊ะ " + tableNo + ": " + current.name + 
                                 " (" + current.id + ") - " + current.date + " " + current.time);
                
                // แสดงรายการจองที่รออยู่
                List tableList = bookings.lists[i];
                if (tableList.size() > 1) {
                    System.out.println("  รายการจองที่รออยู่:");
                    for (int j = 1; j < tableList.size(); j++) {
                        Record waiting = tableList.records[j];
                        System.out.println("    - " + waiting.name + 
                                         " (" + waiting.id + ") - " + waiting.date + " " + waiting.time);
                    }
                }
            }
        }
    }

    public void run() {
        System.out.println("=== ระบบจองโต๊ะอาหารในร้าน ===");
        
        while (true) {
            System.out.println("\nเลือกคำสั่ง:");
            System.out.println("1. add - เพิ่มการจอง");
            System.out.println("2. cancel - ยกเลิกการจอง");
            System.out.println("3. check - ตรวจสอบการจองซ้ำ");
            System.out.println("4. show - แสดงรายการจองปัจจุบัน");
            System.out.println("5. exit - ออกจากระบบ");
            System.out.print("คำสั่ง: ");
            
            String command = scanner.nextLine().toLowerCase();
            
            switch (command) {
                case "add":
                case "1":
                    addBooking();
                    break;
                case "cancel":
                case "2":
                    cancelBooking();
                    break;
                case "check":
                case "3":
                    checkBooking();
                    break;
                case "show":
                case "4":
                    showCurrentBookings();
                    break;
                case "exit":
                case "5":
                    System.out.println("ออกจากระบบ");
                    return;
                default:
                    System.out.println("คำสั่งไม่ถูกต้อง");
            }
        }
    }

    public static void main(String[] args) {
        main system = new main();
        system.run();
    }
}
