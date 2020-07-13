# Automatic Meat Smoker Project

#### Table of Contents

- [Overview](#overview)
- [Supplies](#supplies)
- [Journey](#journey)
- [FAQ](#frequently-asked-questions)
- [Documentation & Resources](#documentation-and-resources)

---

## Overview

I started this project to better automate the smoking process of our families sausage. I also decided to share the process on [LinkedIn](https://www.linkedin.com/in/jwmeidinger/detail/recent-activity/shares/) which you will be able to see some pictures of the process below. The project took about 6-7 weeks during my free time through out the day. All of the 3D printed files I used are in the folder as well as the Arduino code.

## Supplies

The following items are what I used in the project but feel free to substitute what ever you want.

- [Elegoo Mega Arduino Kit](https://www.amazon.com/EL-KIT-008-Project-Complete-Ultimate-TUTORIAL/dp/B01EWNUUUA/ref=sr_1_3?dchild=1&keywords=arduino+kit+mega&qid=1594332180&sr=8-3).
- [20KG Servo Motor](https://www.amazon.com/gp/product/B073F92G2S/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1). This is needed as its too hard for the servo in the kit to turn the valve.
- [Power for servo](https://www.amazon.com/gp/product/B013UJAZY8/ref=ppx_yo_dt_b_asin_title_o00_s00?ie=UTF8&psc=1). I used this and cut off the end but you could use a power supply.
- [3D Printer](https://www.creality3dofficial.com/products/official-creality-ender-3-3d-printer).
- Smoker. My grandpa built ours.
- Sodering iron.
- [2 Meat probes](https://www.amazon.com/Weber-iGrill-Pro-Meat-Probe/dp/B01M8LG8U5/ref=sr_1_18?crid=2D2HI0JIUIPH2&dchild=1&keywords=meat+probes&qid=1594333426&sprefix=meat+pro%2Caps%2C190&sr=8-18) which you can buy at the store or online and if you want to have the jack you can take a meat thermometer apart or just buy a jack online.
- Small 2mm crews to screw the motherboard into the bottom piece of the enclosure.
- Bolt and nut for the servo motor mount.
- Ball valve. I would advise going to a propane/natural gas professional so you don't get any leaks.


## Journey

### Update: 1
Current phase: R&D

Here is a photo of the messy bread board(white rectangle). Currently checking out the the meat thermometer probe. I took it off a store bought one with a soldering iron. Temperature is a little slow due to not using step function but should work for our case. Also in the image is a step motor (left of the blue Arduino) which I will be ordering a stronger one in order to increase or decrease the heat (propane).

The next thing I want to do is get my 3D printer to make an enclosure. I also have a spare LED screen that I could hook up to give updates and remaining time for the meat. I might also get another meat probe or modify the other thermistor I have for the temperature of smoker and have the other for meat temp.

![update1](https://media-exp1.licdn.com/dms/image/C4D22AQFyxAniZcup7A/feedshare-shrink_800/0?e=1597276800&v=beta&t=kWlYxYZJYUnZDCwk7krxGrFPLm4EeTmGEynRHRnwJIQ)

### Update: 2

Waiting for parts

### Update: 3
Current phase: R&D

This weeks update we have a everything setup up ready to be soldered together and put into the 3D box I made. I still need to find a ball valve for natural gas to hook the motor up to and depending on the valve I might need a bigger servo motor due to the lack of power it has. I need to find another meat probe or take the thermometer I have now and add heat resistant wires to it in order to put it in the smoker. With all that being said the electrical schematics and software are complete (besides the resistors and motor tuning).

![update3](https://media-exp1.licdn.com/dms/image/C4E22AQGWrLmNRdzH8g/feedshare-shrink_800/0?e=1597276800&v=beta&t=QunQZH3sEi6gja0NAjPoFdxLOZy51Q_CCeLft3cHouc)

### Update: 4
Current phase: Alpha

We are getting closer and closer to a finished product. From last update I was able to get a valve and a servo which you can see below with the new modified 3D mount. Last item I will probably buy is another probe. After that I should be able to connect everything and put into the printed box. In order to test how much the valve should be open and closed to regulate the heat will take a little bit of trial and error but I might get a Ham or something for testing that.

[Video](https://dms.licdn.com/playlist/C4D05AQFD4qt0gZcuHg/mp4-720p-30fp-crf28/0?e=1594756800&v=beta&t=wCoJy8eoNk6c9F8-B-5UPGuVhab3DCh_cccmQp-9j58)

### Update: 5
Current phase: Alpha 

I just finished up soldering the meat probe, the new smoker probe, and the LCD to the Arduino. Due to the height clearance of the wires on the Arduino board I’m going to reprint the top piece of the enclosure. I need to find some screws that hold the enclosure together. I also will need some bolts for the servo mount instead of just sticking something in the hole. Lastly I just need to solder up the servo motor and tune the amount of gas that is released to the smoker itself.

![update5](https://media-exp1.licdn.com/dms/image/C4D22AQHVG8ikHfPK9g/feedshare-shrink_800/0?e=1597276800&v=beta&t=lYPv3jfk63S0YXKeweF1Ngy2FdAlDwDfBanP9vht_2E)

### Update: 6
Current phase: Beta (Fine tuning)

The final installment of the Automated Meat Smoker (unless something comes up or I have some improvement). In the video you can see that it’s working as I imagined it... besides not plugging in the the meat probe because there was no point as there was nothing in the smoker. I did have a mishap this week as I had everything together but, I was going to test the servo motor but I forgot a ground wire for motor. When taking it back apart I glued the LCD screen to the top and messed it up a little on the right side but works fine.

[Video](https://dms.licdn.com/playlist/C4E05AQFJBbSyeZOvMA/mp4-720p-30fp-crf28/0?e=1594756800&v=beta&t=EZ2tmYHkzrZbJDiAO5JAQ_JHzVjsA2BGg1M24-7Fi88)


## Frequently Asked Questions

### Why did you do this project?

The main purpose of the project is to provide a simple setup for my family to smoke for long periods.
Other reasons include - 

Really like embedded software and wanted to learn and apply some previous knowledge.
Currently looking for a job and thought it would be fun to show empoyers what I'm working on.
Lastly, Who doesn't like to tinker with stuff?

### Why do you have to use another power supply?

There is 5v power supply on the ardiuno but if the Sevo motor needs to move it draws way to much and can cause the temps to be off and affect the lcd screen.
The best solution I found is just getting a cheat coverter on amazon which is linked above. The idea came from this [video](https://www.youtube.com/watch?v=LJEbqiWo2pk) but I did not need as much power as he did. But remember that you need to connect the negative side to the ground of the servo or it will not work.

### There is no schematic design for the wires.

Yes, I did not include the schematic. One reason is that I couldn't find any free ones that were available and easy to use. That being said if you are really wanting to make the same device it's not to difficult to wire things up. The hardest part is the LCD as it's a lot of wires but the temp and servo is pretty easy to do by just watching a video. That being said, watch the last 3 videos below to get started on those. I would highly advise you using the Mega as you can connect alot of deticated ground pins and doesn't mess up LCD or readings. Lastly, one thing that is a little harder to find is for the LCD you need to connect the contrast pin (Might be diffrent on you lcd so look it up) to the digital 6 spot on the ardiuno. It is this line in the code "analogWrite(6,Contrast);".

## Documentation and Resources

- [Ball valve STL source](https://www.youtube.com/watch?v=S8OJ38VGYcc&t=2s)
- [Temperature sensor info](https://www.youtube.com/watch?v=-_XkGju35MI&t=275s)
- [Servo motors](https://www.youtube.com/watch?v=kUHmYKWwuWs&t=2300s)
- [LCD Screen](https://www.youtube.com/watch?v=X1BCvjxIDHM)

If you have any other questions please message me on LinkedIn or open a bug request here on github and I'll try and help you out!



