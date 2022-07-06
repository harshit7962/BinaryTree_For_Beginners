# Minimum Time to burn a Tree starting from a Leaf node
Given a binary tree and a leaf node from this tree, it is known that in 1s all nodes connected to a given node get burned in 1 second. Then all the nodes which are connected through one intermediate get burned in 2 seconds, and so one... 
The task is to find the minimum time required to burn the complete binary tree...

**Example** <br>

![image](https://user-images.githubusercontent.com/62823486/177591245-780281e9-8934-49f7-8cf0-21c8a2fbea5d.png)

In this example we need to burn the tree starting from leaf node with value 13...
|Time               |Nodes Burned|
|-------------------|------------|  
| In first second:  | 8 |
| In second second: | 4 and 5 |
| In third second:  | 1 and 4 |
| In fourth second: | 11 |
| In fifth second:  | 7 and 2 |

Hence total time takes is 5 seconds...
