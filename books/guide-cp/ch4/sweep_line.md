# Sweep Line Algorithms

A sweep line algorithm models a problem as a set of events that are processed in a sorted order.

## The Restaurant Problem

The restaurant problem is "Given a list of the arriving and leaving times of all customers on a certain day, find the maximum number of customers who visited the restaurant at the same time. An example of the problem where there are four customers $A$, $B$, $C$, and $D$:

![Sample](resources/sweep_line/sample.png)

To solve the problem, we create two events for each customer: one event for arrival and another event for leaving. Then, we sort the events and go through them
according to their times. To find the maximum number of customers, we maintain
a counter whose value increases when a customer arrives and decreases when a
customer leaves. The largest value of the counter is the answer to the problem. This images shows the events in the sample: Each customer is assigned
two events: “+” denotes an arriving customer, and “−” denotes a leaving customer.
The resulting algorithm works in $\theta(n \ log \ n)$ time, because sorting the events takes
$\theta(n \ log \ n)$ time and the sweep line part takes $\theta(n)$ time.

![Sample](resources/sweep_line/sweep_line.png)
