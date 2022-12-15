#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(){
//    std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target){
    setGradeToSign(GRADE_TO_SIGN);
    setGradeToExecute(GRADE_TO_EXECUTE);
//    std::cout << "ShrubberyCreationForm Parametrized Constructor Called" << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &oldObj) {
//    std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
    *this = oldObj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator =(const ShrubberyCreationForm &oldObj){
//    std::cout << "ShrubberyCreationForm Default Constructor Called" << std::endl;
    setGradeToExecute(oldObj.getGradeToExecute());
    setGradeToSign(oldObj.getGradeToSign());
    return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
//    std::cout << "ShrubberyCreationForm Destructor Called" << std::endl;
}

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