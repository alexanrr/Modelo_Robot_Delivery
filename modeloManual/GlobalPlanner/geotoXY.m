function [px,py] = geotoXY(lat,long,x,y,numRows, numCols)

for i= 1: numCols
px=0;
py=0;
    if norm(x(1,i)-lat)<=0.0000001
        px=i;
        break
    end

end

for i= 1:numRows
     if norm(y(i,1)-long)<=0.0000001
        py= numRows-i;
        break
    end
end



