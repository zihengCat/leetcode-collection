#include <vector>
#include <string>
#include <unordered_map>
#include <unordered_set>

using namespace std;

class FoodRatings {
private:
    unordered_map<string, int> mFoodRatings;
    unordered_map<string, string> mFoodCuisine;
    unordered_map<string, unordered_set<string> > mHighestRatingFood;
private:
    void add(string& food, string& cuisine, int rating) {
        string hRatedFood = mHighestRatingFood[cuisine].size() > 0
            ? *(mHighestRatingFood[cuisine].begin())
            : "";
        int hFoodRating = mFoodRatings[hRatedFood];
        mFoodRatings[food] = rating;
        mFoodCuisine[food] = cuisine;
        if (rating == hFoodRating) {
            mHighestRatingFood[cuisine].insert(food);
        }
        if (rating > hFoodRating) {
            mHighestRatingFood[cuisine].empty();
            mHighestRatingFood[cuisine].insert(food);
        }
    }
    void change(string food, int newRating) {
        // ...
    }
public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        if (foods.size() != cuisines.size() != ratings.size()) {
            return;
        }
        for (int i = 0; i < foods.size(); i++) {
            add(foods[i], cuisines[i], ratings[i]);
        }
    }

    void changeRating(string food, int newRating) {
        mFoodRatings[food] = newRating;
        string fCuisine = mFoodCuisine[food];
        if (mHighestRatingFood.find(fCuisine) != mHighestRatingFood.end()) {

        }
        return;
    }

    string highestRated(string cuisine) {
        return "";
    }
};

int main(int argc, char const *argv[]) {
    // ...
    return 0;
}

/* EOF */
