# FSM-Final Project (Keypad System)

I am Wallace from L1BC here to show my FSM Final Project

The real example of a system that I took was:
**Keypad system** 

**How it works following with it's states**

FSM states:  
* States: 
Idle: this is the initial state when the system is waiting for a key press
Key press: this is the state that indicates that a key has been pressed
Key release: this is the state that indicates that the key has been released

The following here is that state and transition table of the FSM:

![Untitled document - Google Docs - Google Chrome 1_11_2023 12_42_18 AM](https://user-images.githubusercontent.com/114073349/211623847-e4f345b5-ca7a-407b-908d-bfd337e63860.png)

Moving on we have the Karnaugh Map:

![Untitled document - Google Docs - Google Chrome 1_11_2023 12_44_52 AM](https://user-images.githubusercontent.com/114073349/211624303-b7bf6f6f-5e8e-42ff-90cd-d868e99c0b82.png)

This is an example for the Karnuagh Map for the transition from the Idle state to the Key press state

Moving on to deriving the boolean equations from the K-map:
From this transition we can conlude that the boolean equation is Next State = Input Event

This is a simple simulation of the FSM:
This simulation shows that where the C program will read an input event (0 or 1) from the user and then updates the current state of the keypad system using the boolean equation where Next State = Input Event. It will then print the current state  (0 or 1) to the screen.

*This first picture is when Input Event = 0 and current state = 0*
![fsm c - Untitled (Workspace) - Visual Studio Code 1_11_2023 1_05_20 AM](https://user-images.githubusercontent.com/114073349/211628384-c710b578-fb43-4e58-8045-a8c926cd55ae.png)

*The second picture is when Input Event = 1 and current state = 0*
![fsm c - Untitled (Workspace) - Visual Studio Code 1_11_2023 1_07_10 AM](https://user-images.githubusercontent.com/114073349/211628815-18b8a8a9-90b1-4457-a51a-dc20672f222a.png)

