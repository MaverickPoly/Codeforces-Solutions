        bool found = false;
        for (int i = 0; i < 3; i++) {
            int size = v.size();
            int a = v[size - 1] / 2;
            int b = v[size - 1] - a;

            v[size - 1] = a;
            v.push_back(b);
            sort(all(v));

            if (all_same(v)) {
                found = true;
                break;
            }
        }
