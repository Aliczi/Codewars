/***
Description:
You live in the city of Cartesia where all roads are laid out in a perfect grid. You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk. The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']). You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block, so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will, of course, return you to your starting point. Return false otherwise.

Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only). It will never give you an empty array (that's not a walk, that's standing still!).

***/

#include <stdbool.h>
#include <string.h>

bool isValidWalk(const char *walk) {
  int up_down=0,right_left=0;
  if (strlen(walk) != 10) return false;
  else {
    for (int i=0; i<10; i++){
      switch (walk[i])
        {
          case 'n':
          up_down++;
          break;
          case 's':
          up_down--;
          break;
          case 'w':
          right_left++;
          break;
          case 'e':
          right_left--;
          break;          
      }
    }
  }
  if ( up_down == 0 && right_left == 0) return true;
  else return false;
  
}

/***
 * #include <stdbool.h>

bool isValidWalk(const char *walk) {
  if (strlen(walk) != 10) return 0;
  
  int h = 0, v = 0;
  while(*walk) {
    switch(*walk) {
      case 'n': ++v; break;
      case 's': --v; break;
      case 'e': ++h; break;
      case 'w': --h; break;
    }
    ++walk;
  }
  return h == 0 && v == 0;
}
 * 
 * 
 * 
strlen(X) has a time complexity of O(n) this brings two bad side-effects in this code:
1. iterating twice over the array (strlen and then with a for-loop)
2. Assume that the array is very, very, veeeery big then strlen will take some time to go trough the array instead of just checking the first 10 chars
***/

/***
#include <stdbool.h>

bool isValidWalk(const char *s) {
  if (strlen(s) != 10) return false;
  int x = 0, y = 0;
  for (; *s; s++) *s == 'n' ? y-- : *s == 's' ? y++ : *s == 'w' ? x-- : x++;
  return !x && !y;
}
***/