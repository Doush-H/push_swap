# push_swap
This is one of the projects in the curriculum of 42 School.

## The goal of the school
The schools concept relies on you teaching yourself by learning how to do research and ask for help of your peers when needed. There are no teachers nor lectures. The curriculum includes planty of projects that you need to finish in order to progress and finish the school. The projects increase in difficulty as you go. Main programming language used in the school is `C` and on later stages of the curriculum `C++` besides these two you also learn about other stuff like: `Docker`, `Virtual Machines`, `networking` and more.

## The goal of the project
This project required me to write a program which is going to sort a stack in ascending order with a set of instructions. I had in my disposal 2 stacks, `stack A` and `stack B`. At the end of the execution `stack A` must be sorted and `stack B` must be empty. The program will display which instructions and in which order should be executed to sort the `stack A`.

The set of instructions:
  - `sa` (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
  - `sb` (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
  - `ss` : sa and sb at the same time.
  - `pa` (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
  - `pb` (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
  - `ra` (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.
  - `rb` (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.
  - `rr` : ra and rb at the same time.
  - `rra` (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.
  - `rrb` (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.
  - `rrr` : rra and rrb at the same time.

Example output:

```
pb
pb
sa
pa
pa
```

I used an implementation of the LSD radix sort algorithm. As I couldn't use 10 buckets for each of the digits, the binary representation of the numbers was used. `Bucket A` is `1 bucket` and `bucket B` is `0 bucket`.

The project also contains the bonus part of the exercise. Bonus part is a simple program which is reading the output of the main program from the pipeline. It executes the instructions on the given set of numbers and checks if the `stack A` is sorted and if the `stack B` is empty. It prints out `OK` or `KO` depending if the sorting succeeded or failed.

## In this project I:
  - Learned about `different types` of `sorting algorithms`
  - Gained `more practical knowledge` about `linked lists`
  - Learned about `stacks`
  - Learned about `time` and `memory complexity`

## How to use it?
Pull the repository and navigate into it. Run `make` in order to compile the main executeable or `make bonus` for making the bonus part. Porgram name is `push_swap` numbers for `stack A` can be passed as separate parameters. Exmaple: 
```
push_swap 4 1 5 7 3
...
```

You can also pass the numbers in a string, seperated by spaces. Example:
```
push_swap "2 5 3 1 6"
```
or
```
push_swap "2 5" "3 1 6"
```

Input numbers should **_not_** contain duplicates nor floating point numbers !
