# **Workshop Introduction to Arduino**

![Lintang_Purwadhika](https://static.wixstatic.com/media/2e6af2_f69a4271c3534ae1869a7ed63e278b2b~mv2.png/v1/fill/w_246,h_39,al_c,usm_0.66_1.00_0.01/2e6af2_f69a4271c3534ae1869a7ed63e278b2b~mv2.png)

# *__1. Hello World!__*

## **See Messages on Serial Monitor :heavy_check_mark:**

  1. First, connect Arduino Uno to your laptop via USB cable. 
  
  2. Open Arduino IDE, then set board & port as follow:
    
      - Go to **_Tools > Board_** and choose **_Arduino/Genuino Uno_**.
    
      - Go to _**Tools > Port**_ and choose the appropriate port, e.g. __COM5__.
  
  3. Type sketch below:

      ```c++
      void setup() {
        Serial.begin(9600);
        delay(2000);
        Serial.println("Hello World!");
        delay(2000);
      }

      void loop() {
        Serial.println("Ini pesan loop");
        delay(1000);
      }
      ```
  4. Click __*Upload*__ :arrow_right: button, wait until uploading process done. Click __*Serial Monitor*__ :mag_right: button, set baudrate on _**9600 baud**_ and you will see these kind of messages on Serial Monitor:

      ![Lintang_Serial_Monitor](https://1.bp.blogspot.com/-RmEiAnUMH4U/Wv0zUX-cggI/AAAAAAAAEJo/17BCYt-8AwAPBpiZjEf9--hY8_On-tlWgCLcBGAs/s640/z6.png)

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Arduino's Built-In LED](link)*__ 

#

## **Table of Contents :memo:**

  No.|Material|Tutorial
  -----|-----|-----
  0.|Setup _**(please do this before the workshop)**_ :point_right:|_**[click here](https://github.com/LintangWisesa/Purwadhika-Workshop-Arduino/tree/master/0_Setup)**_
  1.|Hello World!|_**[click here](https://github.com/LintangWisesa/Purwadhika-Workshop-Arduino/tree/master/1_Hello_World)**_
  2.|Arduino's Built-in LED|_**[click here](https://github.com/LintangWisesa/Purwadhika-Workshop-Arduino/tree/master/2_Arduino_BuiltInLED)**_
  3.|Arduino & LEDs|_**[click here](https://github.com/LintangWisesa/Purwadhika-Workshop-Arduino/tree/master/3_Arduino_LEDs)**_
  4.|Arduino & DHT11|_**[click here](https://github.com/LintangWisesa/Purwadhika-Workshop-Arduino/tree/master/4_Arduino_DHT11)**_

#

#### Lintang Wisesa :love_letter: _lintangwisesa@ymail.com_

[Facebook](https://www.facebook.com/lintangbagus) | 
[Twitter](https://twitter.com/Lintang_Wisesa) |
[Google+](https://plus.google.com/u/0/+LintangWisesa1) |
[Youtube](https://www.youtube.com/user/lintangbagus) | 
:octocat: [GitHub](https://github.com/LintangWisesa) |
[Hackster](https://www.hackster.io/lintangwisesa)
