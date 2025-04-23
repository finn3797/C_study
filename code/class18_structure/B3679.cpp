#include <iostream>
#include <vector>
#include <math.h>

struct Code_machine{
    int id;
    int x;
    int y;
    bool init_site;
};

float get_dis(Code_machine& a, Code_machine& b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(){
    int n, k, T;
    std::cin >> n >> k >> T;
    auto *all_machine = new Code_machine[n];
    for (int i = 0; i < n; i++){
        std::cin >> all_machine[i].x >> all_machine[i].y;
        all_machine[i].id = i;
        all_machine[i].init_site = false;
    }

    for (int i = 0; i < k; i++){
        int x, y;
        std::cin >> x >> y;
        for (int j = 0; j < n; j++){
            auto& machine = all_machine[j];
            if (x == machine.x && y == machine.y){
                machine.init_site = true;
                break;
            }
        }
    }

    int res = 0;
    for (int i = 0; i < T; i++){
        int x, y;
        std::cin >> x >> y;
        Code_machine new_machine;
        new_machine.x = x;
        new_machine.y = y;
        float max_dis = -1;
        int max_dis_id = -1;
        for (int j = 0; j < n; j++){
            auto& machine = all_machine[j];
            float dis = get_dis(machine, new_machine);
            if (dis > max_dis){
                max_dis = dis;
                max_dis_id = machine.id;
            }
        }
        if (all_machine[max_dis_id].init_site == true){
            res++;
        }

    }
    std::cout << res << std::endl;
    return 0;
}