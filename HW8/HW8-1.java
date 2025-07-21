package booking;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
// คลาส Record สำหรับเก็บข้อมูลการจอง
class Record {
    String name;
    String id;
    String no;
    String date;
    String time;

    public Record() {
        this("unknown", "0", "dd/mm/yyyy", "hh:mm");
    }

    public Record(String name, String no, String d, String t) {
        id = generateID(no, d, t);
        this.name = name;
        this.no = no;
        date = d;
        time = t;
    }

    String generateID(String no, String d, String t) {
        LocalDateTime n = LocalDateTime.now();
        DateTimeFormatter f = DateTimeFormatter.ofPattern("ss");
        String formattedTime = n.format(f);
        d = d.replaceAll("/", "");
        t = t.replace(":", "");
        String id = "#" + no + d + t + "-" + formattedTime;
        return id;
    }
}
