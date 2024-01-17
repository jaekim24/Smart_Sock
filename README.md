/* Enable smooth scrolling */
@media screen and (prefers-reduced-motion: no-preference) {
  html {
    scroll-behavior: smooth;
  }
}

/* Style the button */
.top-link {
  transition:       all .25s ease-in-out;
  position:         fixed;
  bottom:           0;
  right:            0;
  display:          inline-flex;
  color:            #000000;

  cursor:           pointer;
  align-items:      center;
  justify-content:  center;
  margin:           0 2em 2em 0;
  border-radius:    50%;
  padding:          .25em;
  width:            1em;
  height:           1em;
  background-color: #F8F8F8;
}







# Smart-Socks <a name="introduction"></a>
A smart sock that can collect temperature, pressure, motion ( x,y,z axis and coordinates , and acceleration) , humidity, and is able to vibrate. I created this to have many variety of data to be used to predict if the person wearing the sock is at a high risk for dietetic foot or other risks with deep learning. 

<a class="top-link hide" href="#top">↑</a>
<a name="top"></a>

#Table of Contents <a name "table"></a>
1. [Introduction](#introduction)
2. [Currently Working on](#current)
3. [Pressure Sensor](#pressure)

# To do thursday 
1. work on pressure sensor

# Currently Working On <a name = "current"></a>]



1. making a pressure, humidity, and temp sensor. Maybe acidity (ph) sensor. 
    1. because it'll be smaller, flexable, and more comfortable to have in the sock.
        1. video talking about [it](https://www.youtube.com/watch?v=uVS2WyRxELw).
        2. Reseach [paper](https://www.researchgate.net/publication/295396824_Paper_Skin_Multisensory_Platform_for_Simultaneous_Environmental_Monitoring)

# DIY pressure pad sensor with condutive threads and piezo-resistive conductive sheet <a name= "pressure"></a> 


Piezo-resistive conductive sheet works by decreasing the resistance of the sheet when force is being exerted on to it allowing the current to flow through it. 

I am concerned that the DIY pressure pad will reach it's max "pressure" such as when it's met with the force of a persons weight you will see all the same numbers. 

Another thing i worry about is if we dont make the thread the same length one will have more resistance compared to the other ones or if the thread is too long then the signal we get back could be unusable.

Another thing to consider is when conductive threads or fabrics are stretched or compressed the conductivity increases. 

1. Easy to make with [condutive threads](https://www.sparkfun.com/products/10867) and [Piezo-resistive condutive sheet](https://www.adafruit.com/product/1361)

2. Making pressure sensor [link](https://www.kobakant.at/DIY/?p=7639)
3. <img width="583" alt="Screenshot 2024-01-17 at 1 49 38 PM" src="https://github.com/jaekim24/Smart_Sock/assets/62858192/b55459c6-325d-4982-8c53-6823d05c908f">




 
