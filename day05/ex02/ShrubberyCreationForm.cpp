#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
: Form("ShrubberyCreationForm", target, 145, 137)
{
    std::cout << "ShrubberyCreationForm was created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
    std::cout << "ShrubberyCreationForm was destroied" << std::endl;
}

void    ShrubberyCreationForm::execute(const Bureaucrat &obj) const
{
    if (getSign())
    {
        if (obj.getGrade() > getGradeExec())
            throw GradeTooLowException(obj.getName() + " have low grade for execute this form");
    }
    else
        throw SignException();
    std::ofstream    file(getTarget() + "_shrubbery");
    if (!file.is_open())
        throw ExecuteException(getTarget() + "_shrubbery don't open");
    file << (
		"                      *_                    \n"
		"  __      _*    *       \\    __*           \n"
		" *  \\ ___/      |     ___\\ _/     *\\  _/*\n"
		"     *         /    _/    *       _| /      \n"
		"     |        /    /        _____/ *\\___   \n"
		"     *       /     |     __/_      /    \\  \n"
		"    /       *      *    /  * \\_   * __   * \n"
		"   *        |     /|    \\      \\ __/  \\* \n"
		"  / \\       |___ /  \\    \\__*   *_______ \n"
		"  |  *      *   *    *   *      |       *   \n"
		"  |     __ /  *  \\    \\ /_      *      /  \n"
		"  *    *  *    \\_/     *  \\___ _      *   \n"
		" / \\__/    \\          /       * \\__      \n"
		" *   \\     |         *       /     *       \n"
		"      *    *                *               \n"
	);
    file.close();
}
