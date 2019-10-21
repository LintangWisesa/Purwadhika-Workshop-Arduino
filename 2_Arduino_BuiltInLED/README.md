# **Workshop Introduction to Arduino**

![Lintang_Purwadhika](https://static.wixstatic.com/media/2e6af2_f69a4271c3534ae1869a7ed63e278b2b~mv2.png/v1/fill/w_246,h_39,al_c,usm_0.66_1.00_0.01/2e6af2_f69a4271c3534ae1869a7ed63e278b2b~mv2.png)

# *__2. Arduino's Built-In LED__*

  1. Connect your Arduino Uno, then type sketch below:

      ```c++
      void setup() {
        Serial.begin(9600);
        pinMode(LED_BUILTIN, OUTPUT);
      }

      void loop() {
        Serial.println("status LED: hidup");
        digitalWrite(LED_BUILTIN, HIGH);
        delay(1000);
        Serial.println("status LED: mati");
        digitalWrite(LED_BUILTIN, LOW);
        delay(1000);
      }
      ```
  2. Click __*Upload*__ :arrow_right: button, wait until uploading process done and see what's happened with your Arduino's built-in LED, also check its message on Serial Monitor.

  - __Done!__ :ballot_box_with_check:

  - __Next material: :fast_forward: *[Arduino & LEDs](link)*__ 

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
