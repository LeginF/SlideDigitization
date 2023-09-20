# SlideDigitization
Arduino code to drive a projector and a DSLR

I had a need to digitize 2,000 35mm slides. Flatbed and slide scanners were not an option because they're too slow, scanning at a rate of 5 slides in ten minutes. I reasoned that with a slide projector and a digital camera, there must be a way to scan all of these slides. An Internet search proved me right, so I set to build my own bulk scanning system.

Supplies:
* Kodak 5600 slide projector
* Kodak Stack Loader
* Canon Rebel XS 10.1MP digital SLR
* Arduino Uno
* Arduino 4 Relay board
* Wired Remote control for the projector
* Wired Remote control for the camera

The Kodak 5600 has a built-in screen, so unlike other people, I'm not replacing the projector's light source and pointing the camera directly at the slide.

The code to drive the Arduino is really straight forward, as you can see in ProjectorScanner.ino. It basically loops through _n_ slides, advancing the projector, adjusting the camera's focus, speed and appearture, then shooting.

Isolating the camera and projector from the Arduino is a relay board. I use one relay for each function. Use draw.io to view the electrical diagram in ProjectorScanner.drawio.
