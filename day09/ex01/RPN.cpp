#include "RPN.hpp"

RPN::RPN(void) {

}

RPN::~RPN(void) { }

void RPN::push(int64_t argValue) {
    st.push(argValue);
}

void RPN::exec(char argOp) {
    switch (argOp) {
        case '+' : {
            int64_t right;
            int64_t left;

            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            right = st.top();
            st.pop();
            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            left = st.top();
            st.pop();
            st.push(left + right);
        }
        break ;
        case '-' : {
            int64_t right;
            int64_t left;

            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            right = st.top();
            st.pop();
            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            left = st.top();
            st.pop();
            st.push(left - right);
        }
        break ;
        case '/' : {
            int64_t right;
            int64_t left;

            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            right = st.top();
            st.pop();
            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            left = st.top();
            st.pop();
            st.push(left / right);
        }
        break ;
        case '*' : {
            int64_t right;
            int64_t left;

            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            right = st.top();
            st.pop();
            if (st.empty()) {
                std::cerr << "Error" << std::endl;
                std::exit(0);
            }
            left = st.top();
            st.pop();
            st.push(left * right);
        }
        break ;
        default:
            std::cerr << "Error" << std::endl;
            std::exit(0);
    }
}

int64_t RPN::top(void) {
    return (st.top());
}
