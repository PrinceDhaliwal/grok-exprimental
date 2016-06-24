#ifndef BLOCK_STATEMENT_H_
#define BLOCK_STATEMENT_H_

#include "parser/expression.h"
#include <vector>

namespace grok {
namespace parser {

///  BlockStatment ::= class representing block statments
class BlockStatement : public Expression {
public:
    BlockStatement(std::vector<std::unique_ptr<Expression>> stmts)
        : stmts_{ std::move(stmts) }
    { }

    std::ostream &operator<<(std::ostream &os) const override;
private:
    std::vector<std::unique_ptr<Expression>> stmts_;
};

} // parser
} // grok

#endif // blockstatement.h