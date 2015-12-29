#ifndef HELLRUN_H
#define HELLRUN_H

#include <string>
#include <vector>
#include "arraylist.h"

class HellRun {
public:
	HellRun(int curr); // defaults to HARDCORE!!!
	~HellRun();

	void setDifficulty(bool b); // Set if Insane or Hardcore; true is insane
	void addEpic(std::string name); // Set an epic to the vector
	void addEpics(ArrayList<std::string> other_epics); // Set epics = other_epics
	void setDropped(bool b); // Set if an epic dropped
	void setRunNum(int n); // Set the number of the run
	void setEyes(int n); // Set the number of eyes dropped
	void setOrbs(int n); // Set the number of orbs dropped
	void setInvites(int n); // Set the number of demon invitations dropped

	bool getDifficulty(); // Returns false if hardcore, true if insane
	ArrayList<std::string> getEpics(); // Return the vector containing epics dropped
	int getRunNum(); // Returns which run this is (e.g. the 7th run)
	bool getDropped(); // Returns true if epic_dropped is true, false otherwise
	int getEyes(); // Return number of eyes
	int getOrbs(); // Return number of orbs
	int getInvites(); // Return number of invitations

private:
	int run_number;
	int eyes;
	int orbs;
	int invites;
	bool insane;
	bool epic_dropped;
	ArrayList<std::string> epics;
	

};

#endif