#include <stdio.h>
struct Item {
    int stock_level;
    float unit_price;
};

void check_stock_value(struct Item item_copy);
void update_price(struct Item *item_ptr, float newPrice);

int main() {
    struct Item widget = {150, 19.99};
    printf("--- Initial Item Status ---\n");
    printf("Stock: %d units\n", widget.stock_level);
    printf("Price: $%.2f\n\n", widget.unit_price);
    printf("--- Demonstration of Call by Value ---\n");
    check_stock_value(widget);
    printf("Back in main: Stock level remains the same: %d\n\n", widget.stock_level);
    printf("--- Demonstration of Call by Reference ---\n");
    update_price(&widget, 25.50);
    printf("Back in main: Price is now updated: $%.2f\n", widget.unit_price);

    return 0;
}
void check_stock_value(struct Item item_copy) {
    printf("  Inside check_stock_value:\n");
    printf("  Function received a copy with stock level: %d\n", item_copy.stock_level);
    item_copy.stock_level = 0;
    printf("  We set the internal copy's stock level to %d\n", item_copy.stock_level);
}
void update_price(struct Item *item_ptr, float newPrice) {
    printf("  Inside update_price:\n");
    printf("  Function received a pointer to the original item.\n");
    item_ptr->unit_price = newPrice;
    printf("  We updated the original price to $%.2f via pointer.\n", item_ptr->unit_price);
}
