# dave installation, local install
[steps written here](https://dave-ros2.notion.site/Native-Local-Installation-Manual-7c6d7be83a4947d28ae3e3eb6b7de5ee).
The installation `.repos` file seems to be deleted for jazzy since they moved to ROS Lyrical?
I think best bet for now is to clone git and checkout the commit they did before moving away from Jazzy
So when in the instructions page when you reach `Get source codes`, instead just clone the repo and checkout the last Jazzy commit.
```
git clone https://github.com/IOES-Lab/dave.git
git checkout d2121a5b4457361e60106aaa029b0a448977d70e
```
and continue the installation from there. This might be wrong though, please help correct if i'm missing something!
