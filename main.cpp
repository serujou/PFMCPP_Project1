#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase

//  1)
//  Noun:       tree
//  action 1:   the tree gorws
tree.grow();
//  action 2:   the tree is getting crooked
tree.getCrooked();
//  action 3:   the tree falls
tree.fall();

//  2)
//  Noun:       wind
//  action 1:   the wind blows
wind.blow();
//  action 2:   the wind changes direction
wind.changeDirection();
//  action 3:   the wind blows stronger
wind.blowStronger();

//  3)
//  Noun:       sun
//  action 1:   the sun rises
sun.rise();
//  action 2:   the sun shines
sun.shine();
//  action 3:   the sun sets
sun.set();

//  4)
//  Noun:       dryer
//  action 1:   the dryer heats
dryer.heat();
//  action 2:   the dryer tumbles
dryer.tumble();
//  action 3:   the dryer cools down
dryer.coolDown();

//  5)
//  Noun:       hair
//  action 1:   the hair curls
hair.curl();
//  action 2:   the hair changes color
hair.changeColor();
//  action 3:   the hair gets tangled
hair.getTangled();

//  6)
//  Noun:       heart
//  action 1:   the heart skips a beat
heart.skipBeat;
//  action 2:   the heart beat tempo changes
heart.changeHeartBeatTempo();
//  action 3:   the heart pumps blood
heart.pumpBlood();

//  7)
//  Noun:       sword
//  action 1:   the sword is rusting
sword.rust();
//  action 2:   the sword gets dull
sword.getDull();
//  action 3:   the sword reflects light
sword.reflectLight();

//  8)
//  Noun:       ice
//  action 1:   the ice breaks
ice.break()
//  action 2:   the ice thins
ice.thin();
//  action 3:   the ice melts
ice.melt();

//  9)
//  Noun:       musicPlayer
//  action 1:   the music player plays audio
musicPlayer.playsAudio();
//  action 2:   the music player skips a track
musicPlayer.skipsTrack();
//  action 3: the music player stops audio
musicPlayer.stopsAudio();

//  10)
//  Noun:       guest
//  action 1:   guest arrives
guest.arrive();
//  action 2:   guest sits
guest.sit();
//  action 3:   guest leaves
guest.leave();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
