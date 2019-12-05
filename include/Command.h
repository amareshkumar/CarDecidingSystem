#pragma once

//fwd declaration
class Application; //CarDecidingSystem application??
class Document; //need to figure out...

//Command
class Command {
public:
	virtual void execute() = 0;
	virtual ~Command() {}

protected:
	Command();
};


//Command for taking user's input 
class OpenCommand : public Command {
public:
	OpenCommand(Application* application); //takes an Application as an argument
	virtual void execute();
protected:
	virtual const char* takeUsersInput();
private:
	char* m_request;
	Application* m_application;
};

//Command for parsing user input
class ParseCommand : public Command {
public:
	ParseCommand(Document* document); //takes an Application as an argument
	virtual void execute();
private:
	char* m_request;
	Document* m_document;
};
