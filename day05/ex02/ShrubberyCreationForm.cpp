#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){ };

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(false, GRADE_TO_SIGN, "Shrubbery", GRADE_TO_EXECUTE, _target) {};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oldObj) {
    *this = oldObj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator =(const ShrubberyCreationForm &oldObj){
    this->_target = oldObj._target;
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const{
    Form::execute(bureaucrat);
    writingASCIITree();
}

void ShrubberyCreationForm::writingASCIITree() const{
    std::ofstream outputStream;
    outputStream.open(_target + "_shrubbery");
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