#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>
# include <cstdlib>

class RPN {

    std::stack<int64_t> st;

    RPN(const RPN &argCopy);
    RPN &operator=(const RPN &argCopy);

public:

    RPN(void);
    ~RPN(void);

    void push(int64_t argValue);
    void exec(char argOp);
    int64_t top(void);

};

#endif
