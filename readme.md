# CPE-Secured project

## Done by Armand DUFRESNE

### Overview

This project is a first year project of Epitech, :desktop_computer:
the goal of this project was to recreate an hashtable like a library by ourself.<br>

### Features

* With all features added you can :
    *   - Create an hashtable `new_hashtable`.
    *   - Insert new elements using `ht_insert`.
    *   - Delete elements from the hashtable using `ht_delete`.
    *   - View what's inside the chosen elements `ht_search`.
    *   - See the entire Hashtable `ht_dump`.

### Running this project locally

* Clone this repository locally
* Run `make re` in your terminal in order to charge the lib
* Then you'll create a main with what you want to do for example :

    * int main(void)
    * {
        * hashtable_t *ht = new_hashtable(&hash, 4);
        * ht_insert(ht, "Vision", "./ Documents / Tournament / Modules / Vision ");
        * ht_insert(ht, "Kratos", "./ Trash / Hollidays_Pics /. secret_folder / kratos .ai");
        * ht_insert(ht, "<3", "+33 6 31 45 61 23 71");
        * ht_dump(ht);
        * show_list(ht);
        * printf("Looking for \"%s\": \"%s\"\n", "Kratos", ht_search(ht, "Kratos"));
        * return 0;
    * }
* The last step is to ggc the main adding the lib and you'll be good

Then enjoy your new hashtable.<br>

The list of the tools we used to do this project :hammer_and_wrench:<br>

[![Main tools](https://skillicons.dev/icons?i=c,vscode,github,md&perline=9)](https://github.com/tandpfun/skill-icons)