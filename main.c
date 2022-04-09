#include <kipr/wombat.h>

// new ver 6

int main(){
    wait_for_light(0);
   	create_connect();
    enable_servo(0);
    enable_servo(3);
    
    //Going in line with Botguy
    set_servo_position(3, 2047);
    msleep(1100);
    create_drive_direct(300,300);
    msleep(2950);
    set_create_total_angle(0);
    create_spin_CCW(90);
    msleep(2100);
    
    
    //Lifting Arm
    int i;
    for(i = 2047; i > 1000; i -= 6) {
        set_servo_position(0, i);
    }
    
    //Grabing BOTBALL and going bcack
    create_drive_direct(200,200);
    msleep(4000);
    set_servo_position(3, 450);
    msleep(500);
    create_drive_direct(-200,-200);
    msleep(4100);
    
    //:)
   
    //Going to Transporter and dropping it
    set_create_total_angle(0);
    create_spin_CW(90);
    msleep(1950);
    create_drive_direct(200, 200);
    msleep(3000);
    create_drive_direct(100,100);
    msleep(1400);
    set_create_total_angle(0);
    create_spin_CCW(53);
    msleep(1550);
    create_drive_direct(100,100);
    msleep(1400);
    
    
    set_servo_position(0, 1950);
    set_servo_position(3, 2047);
    msleep(200);
    set_servo_position(0, 1950);
    msleep(200);
    
    //Going back to spawn
    create_drive_direct(-100, -100);
    msleep(3000);
    
    disable_servo(0);
    disable_servo(3);
    
    /*create_spin_CCW(100);
    msleep(1200);
    set_servo_position(3, 950);
    msleep(500);
    set_servo_position(0, 1440);
    msleep(1000);
    create_drive_direct(200, 200);
    msleep(6200);*/
        
        
        
        
        

        
    // go back to spawn area
    /*create_drive_direct(-200, -200);
    msleep(800);
    
    
    create_spin_CW(90);
    msleep(2050);
    create_drive_direct(200,200);
    msleep(1500);
    create_spin_CW(90);
    msleep(2050);
    create_drive_direct(400,400);
    msleep(2000);*/
        
    /*while (1){
        
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
    
    if(get_create_rfcliff_amt() > 2000) {
    	create_drive_direct(50,200);
    }
    
    if (0){
        create_drive_direct(100,100);
        msleep(500);
    }


	printf("%d", get_create_lbump());
    printf("%d", get_create_rbump());
    if (get_create_lbump == 0 || get_create_rbump == 0) {
		    create_stop();
    }*/
    
    create_disconnect();
    return 0;
}

      
