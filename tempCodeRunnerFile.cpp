return ycomp;
}
double pythagoras(double xcomp,double ycomp){
   double result_vec_length;
   result_vec_length = sqrt(pow(xcomp,2)+pow(ycomp,2));
   return result_vec_length;
}
double showResult(double result_vec_length,double result_vec_direction){

    cout << "Length of the resultant vector = " << result_vec_length << "\n";
    cout <<  "Direction of the resultant vector (deg) = " << result_vec_direction;
}