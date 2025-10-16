

int main()
{
// algorithms ?
//input --------> algorithms --------> output
//problem         algorithms           solution

//---------------------------linear search
/*
   array
   +----+----+----+----+----+----+----+----+----+----+
   | 12 |  7 | 34 |  5 | 89 | 23 | 45 | 66 | 78 | 90 |
   +----+----+----+----+----+----+----+----+----+----+
     0    1    2    3    4    5    6    7    8    9      <-- index
   -------------------------------------------------->   <-- search
   from 0                  to                        n
   Worst case scenario: O(n)
   Best case scenario: Ω(n)
   Average case: Θ(n/2) ---> +2
---------------------pseudo code :
for i from 0 to n-1
    if number behind array[i]
    return true
return false
*/

//------------------------Binary search : numbers in array sorted by ascending order

/*
   array sorted by ascending order
   +----+----+----+----+----+----+----+----+----+----+
   |  1 |  5 | 10 | 15 | 20 | 25 | 30 | 35 | 40 | 45 |
   +----+----+----+----+----+----+----+----+----+----+
     0    1    2    3    4    5    6    7    8    9      <-- index
   ---------------->search method o(log(n)): we want find the number 40
   step 1 :
                          ?
   +----+----+----+----+----+----+----+----+----+----+
   |  1 |  5 | 10 | 15 | 20 | 25 | 30 | 35 | 40 | 45 |
   +----+----+----+----+----+----+----+----+----+----+
     0    1    2    3    4    5    6    7    8    9
   step 2 :
                ?
   +----+----+----+----+----+
   | 25 | 30 | 35 | 40 | 45 |
   +----+----+----+----+----+
     5    6    7    8    9
   step 3 :
      ?
   +----+----+
   | 40 | 45 |
   +----+----+
     8    9
   We found the number! 🎉
  - Best case: Ω(1) → found at first guess
  - Worst case: O(log n) → keeps halving until found or exhausted
  - Average case: Θ(log n)
--------------------------pseudo code :
if no array:
    return false
if number behind array[middle]
    return true
else if number < array[middle]
    search array[0] through array[middle - 1]
else if number > array[middle]
    search array[middle + 1] through array[n - 1]

*/
    return 0;
}