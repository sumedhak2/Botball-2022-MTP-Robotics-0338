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
    msleep(4750);
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
    msleep(4000);
    set_servo_position(3, 450);
    msleep(500);
    create_drive_direct(-200,-200);
    msleep(2800);
    
    //:)
   
    //Going to Transporter and dropping it
    set_create_total_angle(0);
    create_spin_CW(170);
    msleep(1000);
    create_drive_direct(200, 200);
    msleep(2600);
    create_drive_direct(100,100);
    msleep(1400);
    set_servo_position(3, 2047);
    set_servo_position(0, 1950);
    msleep(200);
    set_servo_position(0, 1950);
    msleep(200);
    
    
    // go back to spawn area
    create_drive_direct(-200, -200);
    msleep(800);
    
    
    create_spin_CCW(180);
    msleep(2000); 
   
    while (1){
        
        if(get_create_lfcliff_amt() > 1200) {
            create_drive_direct(100,25); 
        }
        else if(get_create_rfcliff_amt() > 1200) {
            create_drive_direct(25,100);
        }
        else {
            break;
        }
            
            
           
    }
    
    create_disconnect();
    return 0;
}

