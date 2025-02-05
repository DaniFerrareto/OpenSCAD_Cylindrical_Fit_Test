The project, as suggestive as its name may propose, is an .scad file that tests how a cylindrical object with a specific diameter may fit in some cylindrical holes, each with a diameter designed a little bit bigger/smaller than the other. The source code is provided in this repository to be compiled in OpenSCAD 2021.01. This project was made in scope of 3D Printing, so the results can change depending on the plastic material you are using to print, or the permitted printing area of your 3D printer. Fell free to change the source code as you desire.

Here is an image of the compiled results.

![image](https://github.com/user-attachments/assets/45b28459-056b-4e52-82ad-cb94a58e876a)

Results of the experiment:
I have used a cylindrical object of a diameter of 9.5(0.05) mm. The plastic pieces were 3D printed in ABS Premium all with distinct diameters. Thsi diameter difference is done by a loosening from 0 to 1 mm variado with a step of 0.025 mm. In other words, there is 41 cylindrical pieces label from "0" to "40". Here are the qualitative results:

No fit: 0 (0)
In first time, no fit, but it can fit with some effort: 1 - 4 (0.025 - 0.1)
Tight fit: 5 - 7 (0.125 - 0.175)
Between too loose and too tight: 8 - 10 (0.2 - 0.25)
Too loose to fit: 11 - 40 (0.275 - 1)
