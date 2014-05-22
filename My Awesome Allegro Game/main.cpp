#include <allegro5/allegro.h>
#include <allegro5/allegro_color.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>

int main(int argc, char **argv) {
    al_init();
    al_init_font_addon();
    al_init_ttf_addon();
    
    ALLEGRO_DISPLAY* display = al_create_display(640, 480);
    ALLEGRO_FONT* font = al_load_font("/Library/Fonts/Futura.ttc", 40, NULL);
    
    al_clear_to_color(al_color_html("#FF9900"));
    al_draw_text(font, al_color_html("#FFFFFF"), 320, 200, ALLEGRO_ALIGN_CENTER, "LOOK AT THIS!");
    al_flip_display();
    al_rest(5.0);
    
    al_destroy_font(font);
    al_destroy_display(display);
    
    return 0;
}