//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int n;
//vector<int> times;
//vector<vector<int>> map;
//enum arrow { UP, DOWN, LEFT, RIGHT };
//enum action{ GO, BACK, CW, CCW};
//
//struct Coord
//{
//	int row;
//	int col;
//	Coord(int _row, int _col) : row(_row), col(_col) {}
//};
//struct Robot
//{
//	Coord r1 = Coord(1, 1);
//	Coord r2 = Coord(1, 2);
//	action prev_action = GO;
//
//
//	bool is_over(int row, int col)
//	{
//		if (row < 1 || row > n)
//			return true;
//		else if (col < 1 || col > n)
//			return true;
//		else if (map[row-1][col-1] == 1)
//			return true;
//		return false;
//	}
//	arrow get_arrow(Coord r, Coord other)
//	{
//		if (other.row == r.row - 1)
//			return UP;
//		else if (other.row == r.row + 1)
//			return DOWN;
//		else if (other.col == r.col - 1)
//			return LEFT;
//		else
//			return RIGHT;
//	}
//	bool move_go()
//	{
//		arrow r2_arrow = get_arrow(r1, r2);
//		if (r2_arrow == LEFT || r2_arrow == RIGHT)
//		{
//			if (is_over(r1.row, r1.col + 1) ||
//				is_over(r2.row, r2.col + 1))
//				return false;
//
//			r1.col++;
//			r2.col++;
//			return true;
//		}
//		else
//		{
//			if (is_over(r1.row + 1, r1.col) ||
//				is_over(r2.row + 1, r2.col))
//				return false;
//			r1.row++;
//			r2.row++;
//			return true;
//		}
//	}
//	bool move_back()
//	{
//		arrow r2_arrow = get_arrow(r1, r2);
//		if (r2_arrow == LEFT || r2_arrow == RIGHT)
//		{
//			if (is_over(r1.row, r1.col - 1) ||
//				is_over(r2.row, r2.col - 1))
//				return false;
//
//			r1.col--;
//			r2.col--;
//			return true;
//		}
//		else
//		{
//			if (is_over(r1.row - 1, r1.col) ||
//				is_over(r2.row - 1, r2.col))
//				return false;
//			r1.row--;
//			r2.col--;
//			return true;
//		}
//	}
//	bool rotate_cw(int axis)
//	{
//		if (axis == 1)
//		{
//			arrow r2_arrow = get_arrow(r1, r2);
//			switch (r2_arrow)
//			{
//			case UP:
//				if (is_over(r1.row, r1.col + 1) ||
//					is_over(r1.row-1, r1.col+1))
//					return false;
//				r2.row = r1.row;
//				r2.col = r1.col + 1;
//				return true;
//			case DOWN:
//				if (is_over(r1.row, r1.col - 1) ||
//					is_over(r1.row+1, r1.col-1))
//					return false;
//				r2.row = r1.row;
//				r2.col = r1.col - 1;
//				return true;
//			case LEFT:
//				if (is_over(r1.row - 1, r1.col) ||
//					is_over(r1.row-1, r1.col-1))
//					return false;
//				r2.row = r1.row - 1;
//				r2.col = r1.col;
//				return true;
//			case RIGHT:
//				if (is_over(r1.row + 1, r1.col) ||
//					is_over(r1.row+1, r1.col+1))
//					return false;
//				r2.row = r1.row + 1;
//				r2.col = r1.col;
//				return true;
//			default:
//				break;
//			}
//		}
//		else
//		{
//			arrow r1_arrow = get_arrow(r2, r1);
//			switch (r1_arrow)
//			{
//			case UP:
//				if (is_over(r2.row, r2.col + 1) ||
//					is_over(r2.row-1, r2.col+1))
//					return false;
//				r1.row = r2.row;
//				r1.col = r2.col + 1;
//				return true;
//			case DOWN:
//				if (is_over(r2.row, r2.col - 1) ||
//					is_over(r2.row+1, r2.col-1))
//					return false;
//				r1.row = r2.row;
//				r1.col = r2.col - 1;
//				return true;
//			case LEFT:
//				if (is_over(r2.row - 1, r2.col) ||
//					is_over(r2.row-1, r2.col-1))
//					return false;
//				r1.row = r2.row - 1;
//				r1.col = r2.col;
//				return true;
//			case RIGHT:
//				if (is_over(r2.row + 1, r2.col) ||
//					is_over(r2.row+1, r2.col+1))
//					return false;
//				r1.row = r2.row + 1;
//				r1.col = r2.col;
//				return true;
//			default:
//				break;
//			}
//		}
//	}
//	bool rotate_ccw(int axis)
//	{
//		if (axis == 1)
//		{
//			arrow r2_arrow = get_arrow(r1, r2);
//			switch (r2_arrow)
//			{
//			case UP:
//				// to left
//				if (is_over(r1.row, r1.col - 1) ||
//					is_over(r1.row-1, r1.col-1))
//					return false;
//				r2.row = r1.row;
//				r2.col = r1.col - 1;
//				return true;
//			case DOWN:
//				// to right
//				if (is_over(r1.row, r1.col + 1) ||
//					is_over(r1.row+1, r1.col+1))
//					return false;
//				r2.row = r1.row;
//				r2.col = r1.col + 1;
//				return true;
//			case LEFT:
//				// to down
//				if (is_over(r1.row + 1, r1.col) ||
//					is_over(r1.row+1, r1.col-1))
//					return false;
//				r2.row = r1.row + 1;
//				r2.col = r1.col;
//				return true;
//			case RIGHT:
//				// to up
//				if (is_over(r1.row - 1, r1.col) ||
//					is_over(r1.row-1, r1.col+1))
//					return false;
//				r2.row = r1.row - 1;
//				r2.col = r1.col;
//				return true;
//			default:
//				break;
//			}
//		}
//		else
//		{
//			arrow r1_arrow = get_arrow(r2, r1);
//			switch (r1_arrow)
//			{
//			case UP:
//				// to left
//				if (is_over(r2.row, r2.col - 1) ||
//					is_over(r2.row-1, r2.col-1))
//					return false;
//				r1.row = r2.row;
//				r1.col = r2.col - 1;
//				return true;
//			case DOWN:
//				// to right
//				if (is_over(r2.row, r2.col + 1) ||
//					is_over(r2.row+1, r2.col+1))
//					return false;
//				r1.row = r2.row;
//				r1.col = r2.col + 1;
//				return true;
//			case LEFT:
//				// to down
//				if (is_over(r2.row + 1, r2.col) ||
//					is_over(r2.row+1, r2.col-1))
//					return false;
//				r1.row = r2.row + 1;
//				r1.col = r2.col;
//				return true;
//			case RIGHT:
//				// to up
//				if (is_over(r2.row - 1, r2.col) ||
//					is_over(r2.row-1, r2.col+1))
//					return false;
//				r1.row = r2.row - 1;
//				r1.col = r2.col;
//				return true;
//			default:
//				break;
//			}
//		}
//	}
//};
//
//
//
//
//
//
//bool do_action(vector<vector<int>> board, Robot robot, int time = 0)
//{
//	if (time > n*robot.r1.row)
//		return false;
//	if (robot.r1.row == n && robot.r1.col == n)
//	{
//		times.push_back(time);
//		return true;
//	}
//	else if (robot.r2.row == n && robot.r2.col == n)
//	{
//		times.push_back(time);
//		return true;
//	}
//	if (time == 2)
//		int a = 5;
//	switch (robot.prev_action)
//	{
//	case GO:
//		if (robot.move_go())
//		{
//			time++;
//			robot.prev_action = GO;
//			do_action(board, robot, time);
//			time--;
//			robot.move_back();
//		}
//		if (robot.rotate_cw(1))
//		{
//			time++;
//			robot.prev_action = CW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_ccw(1);
//		}
//		if (robot.rotate_cw(2))
//		{
//			time++;
//			robot.prev_action = CW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_ccw(2);
//		}
//		if (robot.rotate_ccw(1))
//		{
//			time++;
//			robot.prev_action = CCW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_cw(1);
//		}
//		if (robot.rotate_ccw(2))
//		{
//			time++;
//			robot.prev_action = CCW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_cw(2);
//		}
//		break;
//	case BACK:
//		if (robot.move_back())
//		{
//			time++;
//			robot.prev_action = BACK;
//			do_action(board, robot, time);
//			time--;
//			robot.move_go();
//		}
//		if (robot.rotate_cw(1))
//		{
//			time++;
//			robot.prev_action = CW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_ccw(1);
//		}
//		if (robot.rotate_cw(2))
//		{
//			time++;
//			robot.prev_action = CW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_ccw(2);
//		}
//		if (robot.rotate_ccw(1))
//		{
//			time++;
//			robot.prev_action = CCW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_cw(1);
//		}
//		if (robot.rotate_ccw(2))
//		{
//			time++;
//			robot.prev_action = CCW;
//			do_action(board, robot, time);
//			time--;
//			robot.rotate_cw(2);
//		}
//		break;
//	case CW:
//		if (robot.move_go())
//		{
//			time++;
//			robot.prev_action = GO;
//			do_action(board, robot, time);
//			time--;
//			robot.move_back();
//		}
//		if (robot.move_back())
//		{
//			time++;
//			robot.prev_action = BACK;
//			do_action(board, robot, time);
//			time--;
//			robot.move_go();
//		}
//		break;
//	case CCW:
//		if (robot.move_go())
//		{
//			time++;
//			robot.prev_action = GO;
//			do_action(board, robot, time);
//			time--;
//			robot.move_back();
//		}
//		if (robot.move_back())
//		{
//			time++;
//			robot.prev_action = BACK;
//			do_action(board, robot, time);
//			time--;
//			robot.move_go();
//		}
//		break;
//	}
//	return false;
//}
//
//
//int solution(vector<vector<int>> board) {
//	int answer = 0;
//	map = board;
//	n = board.size();
//	Robot robot;
//	do_action(board, robot);
//	sort(times.begin(), times.end());
//	
//	answer = times[0];
//
//
//	return answer;
//}
//
//int main()
//{
//	vector<vector<int>> board = { {0,0,0,1,1},{0,0,0,1,0},{0,1,0,1,1},{1,1,0,0,1},{0,0,0,0,0} };
//	solution(board);
//	return 0;
//}