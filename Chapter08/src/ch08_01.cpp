#include <stdio.h> // โปรแกรมที่ 8.1 แสดงวิธีการอ้างอิงค่าผ่านพอยน์เตอร์
main() {
    int *p, x = 10;         // ประกาศพอยน์เตอร์ p และ ตัวแปร x = 10
    p = &x;                 // พอยน์เตอร์p ชี้ไปยังตำแหน่ง x
    printf("%d\n", x);      // แสดงค่า x   
    printf("%d\n", *p);     // แสดงค่าที่พอยน์เตอร์ p ชี้อยู่
    printf("%d\n", &x);     // แสดงตำแหน่ง x
    printf("%d", p);        // แสดงค่าพอยน์เตอร์ p

}	