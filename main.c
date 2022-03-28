
#include <kipr/wombat.h>

int main()
{
    create_connect();
    enable_servo(0);
    enable_servo(3);
    
    //Going in line with Botguy
    set_servo_position(3, 2047);
    msleep(1100);
    create_drive_direct(200,200);
    msleep(4600);
    set_create_total_angle(0);
    create_spin_CCW(80);
    msleep(2050);
    
    //Lifting Arm
    int i;
    for(i = 2047; i > 1000; i -= 9) {
        set_servo_position(0, i);
    }
    
    //Grabing BOTBALL and going bcack
    create_drive_direct(200,200);
    msleep(4400);
    set_servo_position(3, 450);
    msleep(500);
    create_drive_direct(-200,-200);
    msleep(2500);
    
    //:)

    //Going to Transporter and dropping it
    set_create_total_angle(0);
    create_spin_CW(170);
    msleep(1050);
    create_drive_direct(200, 200);
    msleep(1800);
    set_servo_position(0, 1700);
    msleep(1000);
    create_drive_direct(100,100);
    msleep(300);
    set_servo_position(3, 2047);
    msleep(200);
    set_servo_position(0, 1100);
    msleep(200);
    create_disconnect();
    return 0;
}
