#pragma once

class Double{
  private:
    double doubles;

  public:
    Double(double);
    Double();
    double getValue();
    void setValue();
    double operator+(double svalue){
      return doubles + svalue;
    }
    double operator+(int svalue){
      return doubles + svalue;
    }
    bool operator==(Double& svalue){
      return this -> doubles == svalue.getValue();
    }

};
