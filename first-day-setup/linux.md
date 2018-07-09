# Linux Setup

![](/assets/pic.jpg)

For the 2018-1 IQT course, we will be using Manjaro XFCE \(Will may be using Manjaro i3, but it's the same thing\). Manjaro is based off of Arch Linux and utilizes it's Pacman and AUR repositories. What makes Manjaro Linux different from Arch is that it's more user friendly, already setup with a Desktop Environment or Windows Manager \(depending on which edition you use\) and it's more stable than Arch. This Linux distro is a rolling release, so there will be no need for us to ever setup a new VM; all we have to do is update the packages.

## Setting up Manjaro

![](/assets/cf5bfc2cbf73688e1c434e44238e2ddbde72e350.png)

If you would like to setup Manjaro by yourself, follow the steps below. This allows you to setup from scratch, if you are more experienced and prefer a different set of tools and such. If not, jump to the next section and install the clone.

1. Obtain the Manjaro-XFCE ISO from the instructor. If you have another edition you would like to use \(Like KDE, i3, etc\) feel free. You may also use an entirely different distro all together if you are comfortable enough setting it up. Though you may be on your own if things go south. 
2. Follow the instructions here using VMware, ensuring you set the Hard Disk size to at least 40GB. 
   1. [https://wiki.manjaro.org/index.php?title=VMware](https://wiki.manjaro.org/index.php?title=VMware)
3. Download the first-day script from here: [https://gitlab.com/wstaud/class-scripts](https://gitlab.com/wstaud/class-scripts)  
   1. Download it as a tar.gz to your Downloads directory  
   2. Open up a terminal, type in the commands above one line at a time \(Omit anything that proceeds a \#\)

   ```bash
   # Change directories
   cd ~/Downloads

   # Untar (unzip) the file. 
   # The file name is long... when typing it in, type the first 5 letters and hit tab... it'll auto fill
   tar -xvzf class-scripts-masterxxxxxxxxx.tar.gz 

   # Change Directory into the new directory (don't forget to use tab to auto-fill)
   cd class-scripts-masterxxxx

   # Make the file excutable
   chmod +x first-day.sh

   # Execute the file
   ./first-day.sh

   # Enter your password when prompted
   ```

This entire process may take awhile on this network. If it takes too long, we may have to switch to cloned versions.

## Installing Cloned Manjaro

1. Obtain the cloned Manjaro from the instructor
2. Open VMware
3. Click "Open a Virtual Machine"
4. Select the cloned VM
5. Verify settings
   1. HDD 40+GB
   2. 2GB RAM
   3. Display: Uncheck Accelerate 3D Graphics
6. Login
   1. User: dot-student
   2. Password: Will be given in class
7. Create a New User if desired



