// a binary expression tree that supports two-operant addition and
//   multiplication of integers from [0, ..., 9]
struct bet;

// bet_read() reads one binary expression, which must be represented in Polish
//   notation (or prefix notation), from input. Supported operators are binary
//   + and *; all operators support exactly two operants; supported values are
//   integers between 0 and 9 (both inclusive). If there is no input to read,
//   i.e., input has reached EOF, the function returns NULL.
//   Supported: (+ 1 3)        Unsupported: (+ 1 -3)  : -3 out of value range
//              (+ 1 (* 2 3))               (* 20 4)  : 20 out of value range
//              (+ (* 1 2) 3)               (* 1 2 3) : more than two operants
// effect: might allocate heap memory; client might have to call bet_destroy
//         reads from input
// time:   O(n)
struct bet *bet_read(void);

// bet_destroy(bet) releases all resources used by bet.
// effects: deallocated memory; bet becomes invalid
// time:    O(n)
void bet_destroy(struct bet *bet);

// bet_evaluate(bet) evaluates the mathematical expression stored
//   in bet.
// time: O(n)
int bet_evaluate(const struct bet *bet);