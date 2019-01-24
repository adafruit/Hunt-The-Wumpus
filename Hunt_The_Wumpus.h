// -------------------------------------------------------------------------------
// An Arduino sketch that implements the classic game Hunt the Wumpus
//
// MIT license.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
// -------------------------------------------------------------------------------

//! Hazard types
enum HazardType { NONE=0, BAT=1, PIT=2, WUMPUS=4 };

void read_button_clicks();
void print_cave_number(uint8_t cave_idx);
void clear_current_menu();
void highlight_current_menu();
void handle_menu();
HazardType check_for_hazards(uint8_t room_idx);
void begin_splash_screen();
void animate_splash_screen();
void start_game();
void status_delay();
void begin_move_room();
void begin_bat_move();
void animate_bat_move();
void end_bat_move();
void enter_new_room();
void begin_input_move();
void input_move();
void begin_input_arrow();
void input_arrow();
void cancel_input_arrow();
void being_shooting_arrow();
void animate_shooting_arrow();
void arrow_missed();
void draw_game_over_screen(uint8_t backlight, const __FlashStringHelper *message, uint8_t icon);
void game_over_arrow();
void game_over_pit();
void game_over_wumpus();
void game_over_win();
void game_over_delay();
