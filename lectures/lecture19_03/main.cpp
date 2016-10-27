#include <iostream>
#include <string>
using namespace std;

class GroupProject {
public:
    GroupProject();

    bool is_member(string nafn);

    void sortgroup();

private:
    int n;
    string *p;
};

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


    return 0;
}
