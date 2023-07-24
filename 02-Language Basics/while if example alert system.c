/*University chemists have developed a new process for the manufacturing of a drug that heals wounds extremely quickly. 
The manufacturing process is very lengthy and requires monitoring the chemicals at all times, sometimes for hours! 
Entrusting this task to a student is not possible; students tend to fall asleep or not pay close attention after a while.
Therefore you need to program an automatic device to monitor the manufacturing of the drug. 
The device measures the temperature every 15 seconds and provides these measurement to your program. 

Your program should first read two integers representing the minimum and maximum safe temperatures. 
Next, your program should continuously read temperatures (integers) that are being provided by the device. 
Once the chemical reaction is complete the device will send a value of -999, indicating to you that temperature readins are done. 
For each recorded temperature that is in the correct range (it could also be equal to the min or max values), 
your program should display the text "Nothing to report". 
But as soon as a temperature reaches an unsafe level your program must display the text "Alert!" 
and stop reading temperatures (although the device may continue sending temperature values).

Examples
Input:
10 20
15 10 20 0 15 -999
Output:
Nothing to report
Nothing to report
Nothing to report
Alert!
 
Input:
0 100
15 50 75 -999
Output:
Nothing to report
Nothing to report
Nothing to report
*/
#include <stdio.h>
int main(void) {
    int minTemp, maxTemp;
    int temp = 0;
    int i=1;
    //enter the values of min temperature and max temperature
    scanf("%d%d", &minTemp, &maxTemp);
   //as lon as i=1, the code will run
    while (i) {

        scanf("%d", &temp);
         
         if(temp==-999)//if temp be -999, i equals zero and code will stop.
            i=0;
         
          
         if(temp >= minTemp && temp <= maxTemp)//as long as this statement true, code will continue
            printf("Nothing to report\n");
            
         if(temp<minTemp||temp>maxTemp){//if this statement be true, code will stop
         printf("Alert!\n");
            i=0;
          }

     
    }

    return 0;
}