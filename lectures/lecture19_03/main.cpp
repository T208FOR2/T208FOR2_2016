#include <iostream>
#include <string>
using namespace std;

class GroupProject {
public:
    GroupProject();

    friend istream& operator >> (istream &ins, GroupProject &gp);

private:
    int n;
    string *p;

    void make_space_for_one_more();
    bool is_member(string nafn);

    void sortgroup();
};

istream& operator >> (istream &ins, GroupProject &gp) {
    int tala;
    ins >> tala;
    for (int i = 0; i < tala; i++) {
        string nafn;
        ins >> nafn;

    }
}

GroupProject::GroupProject() {
    n = 0;
    p = NULL;
}

void GroupProject::sortgroup() {
  int i, j;
  string tmp;

  for (i = 1; i < n; i++) {
    tmp = p[i];
    j = i;
    while (j > 0 && p[j - 1] > tmp) {
      p[j] = p[j - 1];
      j--;
    }
    p[j] = tmp;
  }
}

int main()
{
    GroupProject gp;

    cin >> gp;
    cin >> gp;

    return 0;
}
