# Lecture 0: Scratch

## How is information represented in computers? 
Computers only speak binary. Use 1s and 0s to convert informations into outputs. Patterns of 0s and 1s are interchanged to represent informations. 

There are multiple inty transitors in your computers that leads this process of switching on and off the zeros and ones. In the unary digits, for example number 123 is divided into $10^2*1 + 10^1 *2 + 10^0*3$. In the binary system, the 10s change into 2s. So $001$ would be $2^2*0 + 2^1 *2*0+ 2^0*1 = 1$. These numbers in the binary system are called *bits* and the computer usually uses them as 8 at a time. 

How would a computer represent letters in this case? Captial A has been standardize as the number 65 as a pattern of 0100001, B is 66. How does a computer then distinguish between letters and numbers?? This has been standardized by humans using a **ASCII system**. Computers konw this mapping. Any letter comes in a combination of 8 bits. 

The problem of using ASCII, we can only represent 256 bits and would only be usefull when we are using only english. Images, emoticons, and some world languages do not use ASCII. The newer standard has to be **Unicode**, and this represents more bits and hence more letters and characters. 

Colors, photos should also be represented. The **RGB** System was proposed to represent the mixture of colores. In imaging, combining the amound of Red, Green, Blue (24 bits total - 8 bits for each of the colors) will give desired colors. 

How can videos be represented using zeros and ones. It is basically a whole bunch of images, representations of zeros and ones, that are put together with some notion of time. In the modern videos, programs have been developed to use a few zeros to represent the same information (compression).

## Algorithms
This is step by step instructions to the computer to solve some kind of problem. Questions when thinking about an algorithm: (1) is it correct? (2) is it efficient?

We always have to think about the performance and quality of your algorithm thinking about the problem. 

