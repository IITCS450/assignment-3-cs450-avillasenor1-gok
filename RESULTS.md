

setup: 
4 children
child 1: 10 tickets
child 2: 20 tickets
child 3: 30 tickets
child 4: 40 tickets



Workload:
i ran 2000 loops of the burn(200,000) loop.
each process in the background competed for process time and 
the lottery scheduler had to make a choice at every timer interrupt.




Observed relative shares over a sufficiently long run:
the fourth child(40 tickets) finished first in 163 ticks
then the third child with 178 ticks
then the second child with 188 ticks
finally the first child with 230 ticks

It was observed that if you had more tickets then you would finish faster



Notes on variance and why longer runs converge:
in the short term randomness is more important since it's a lottery. 
in the long run and as the workload increases the luck or randomness balances out


