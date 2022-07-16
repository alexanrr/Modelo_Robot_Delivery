function [px,py] = geotoXY(lat,long,x,y)

for i= 1: 601
px=0;
py=0;
    if norm(x(1,i)-lat)<=0.0000001
        px=i;
        break
    end

end

for i= 1:801
     if norm(y(i,1)-long)<=0.0000001
        py=801-i;
        break
    end
end



