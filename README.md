# HomeworkW11
 
## Process Reflection
When I started working on this code, I wasnt entirely confident about how to map the timing logic to control the LEDs in the specific pattern I envisioned. I knew what I wanted—D7 to light up at 10 seconds, D8 and D9 at 20 seconds, and D10, D11, and D12 at 30 seconds—but translating that into a program required a bit of trial and error. It felt a little daunting initially, but I was excited to make it work.

I began by setting up the array of pins for the LEDs, making sure they corresponded correctly to the pins I was using on the board. That part was straightforward and familiar. The challenge started when I had to implement the logic for the timing and sequencing of the LEDs. I had to figure out how to calculate the elapsed time in a way that matched the 10-second intervals I needed and how to ensure the LEDs lit up in groups at the right times.

Initially, I struggled with indexing the LEDs properly in relation to the timing logic. I made a few mistakes, such as referencing the wrong pin indices or forgetting to close a parenthesis in a condition. These little errors taught me the importance of double-checking my logic and syntax. Debugging was frustrating at times, but each fix brought me closer to the result I wanted.

As I refined the code, I found it helpful to break down the problem into smaller, manageable pieces. For instance, I started by just getting one LED to light up at the correct time before moving on to the others. This approach helped me stay focused and made debugging easier because I could test each part incrementally.

Writing the conditional statements for the time ranges was a bit tricky. I had to carefully define the boundaries for each range (like 10-19 seconds for D7) and ensure the conditions didn’t overlap or leave gaps. I also realized I needed to cycle the logic every 40 seconds, which added another layer of complexity. Once I got the logic sorted out, it was so satisfying to see the LEDs light up in the exact pattern I had planned.

This project taught me patience and the value of breaking down a problem into smaller steps. I also realized how important it is to test incrementally and not be afraid of mistakes. Each error was an opportunity to learn, and in the end, I felt really proud of how everything came together. Seeing the LEDs blink in sync with the timing logic was a small but meaningful reward for the effort I put in.


one led
[![IMG-1706.avif](https://i.postimg.cc/FzDbSJ6y/IMG-1706.avif)](https://postimg.cc/kRRt3DqG)

two led 
[![IMG-1708.avif](https://i.postimg.cc/zv7Mf718/IMG-1708.avif)](https://postimg.cc/BP8NYx6V)

three led 
[![IMG-1709.avif](https://i.postimg.cc/4yyvzQ9J/IMG-1709.avif)](https://postimg.cc/8f8rGW43)

I think the main challenge I faced was pinpointing the exact LED to ensure the lights lit up in the precise chronological order I wanted.






