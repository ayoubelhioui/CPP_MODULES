#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){ };

ShrubberyCreationForm::ShrubberyCreationForm(std::string _enteredTarget) : Form(SHRUBBERY_GRADE_TO_SIGN, "Shrubbery", SHRUBBERY_GRADE_TO_EXECUTE, _enteredTarget) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oldObj) { *this = oldObj; }

ShrubberyCreationForm &ShrubberyCreationForm::operator =(const ShrubberyCreationForm &oldObj){
    this->_target = oldObj._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){ }

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const{
    Form::execute(bureaucrat);
    writingASCIITree(this->_target);
}

void ShrubberyCreationForm::writingASCIITree(const std::string &_enteredTarget) {
    std::ofstream outputStream;
    outputStream.open(_enteredTarget + "_shrubbery");
    outputStream << "          &&& &&  & &&\n";
    outputStream << "        && &\\/&\\|& ()|/ @, &&\n";
    outputStream << "        &\\/(/&/&||/& /_/)_&/_&\n";
    outputStream << "    &() &\\/&|()|/&\\/ '%\" & ()\n";
    outputStream << "    &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
    outputStream << "    &&   && & &| &| /& & % ()& /&&\n";
    outputStream << "    ()&_---()&\\&\\|&&-&&--%---()~\n";
    outputStream << "        &&     \\|||\n";
    outputStream << "                |||\n";
    outputStream << "                |||\n";
    outputStream << "                |||\n";
    outputStream << "        , -=-~  .-^- _\n";
}