import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class VisitCountServlet extends HttpServlet {

    @Override
    protected void doGet(
        HttpServletRequest request,
        HttpServletResponse response
    ) throws ServletException, IOException {
        response.setContentType("text/html");
        PrintWriter out = response.getWriter();
        Cookie[] cookies = request.getCookies();
        Cookie visitCountCookie = null;
        if (cookies != null) {
            for (Cookie cookie : cookies) {
                if (cookie.getName().equals("visitCount")) {
                    visitCountCookie = cookie;
                    break;
                }
            }
        }
        if (visitCountCookie == null) {
            visitCountCookie = new Cookie("visitCount", "1");
            out.println("Welcome, first-time visitor!");
        } else {
            int visitCount = Integer.parseInt(visitCountCookie.getValue());
            visitCount++;
            visitCountCookie.setValue(Integer.toString(visitCount));
            out.println("You have visited this page " + visitCount + " times.");
        }
        visitCountCookie.setMaxAge(60 * 60 * 24 * 365);
        response.addCookie(visitCountCookie);

        out.close();
    }
}
