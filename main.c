
#include <kipr/wombat.h>
// void enable_servo(0);
// void enable_servo(3);
int main()
{
   
	//initial setup
    create_connect();
    set_servo_position(3, 1300);
    
    
    create_drive_direct(200,200);
    msleep(4500);
    set_create_total_angle(0);
    create_spin_CCW(90);
    msleep(2100);
    enable_servo(0);
    enable_servo(3);
    int i;
    
    for(i = 1000; i > 75; i -= 9) {
        set_servo_position(0, i);
    }
    
    create_drive_direct(200,200);
    msleep(3480);
    msleep(500);
    set_servo_position(0, 100);
    msleep(500);
    set_servo_position(3, 200);    
    msleep(1000);
    create_drive_direct(-200,-200);
    msleep(4020);
    
    set_create_total_angle(0);
    create_spin_CW(170);
    msleep(1000);
    create_drive_direct(200, 200);
    msleep(3150);
    create_spin_CW(50);
    msleep(500);
    create_drive_direct(200, 200);
    msleep(600);
    set_servo_position(0, 220);
    msleep(550);
    
    set_servo_position(3, 1300);
    
    create_disconnect();
    return 0;
}

















