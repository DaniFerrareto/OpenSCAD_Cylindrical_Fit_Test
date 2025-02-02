// ----- ----- ----- TESTE DE ENCAIXE CILÍNDRICO ----- ----- ----- //

res=100;
// Forneça o diâmetro da peça cilíndrica:
diam=10;

folga=0.025;

for(i=[0:1:9]){
    translate([6*i+diam*i+folga*i,0,0])
    difference(){
        cylinder(10,diam/2+folga*i+2,diam/2+folga*i+2,$fn=res);
        #cylinder(10,diam/2+folga*i,diam/2+folga*i,$fn=res);
    }
}

for(i=[10:1:19]){
    translate([6*(i-10)+diam*(i-10)+folga*(i-10),6+diam+folga+1,0])
    difference(){
        cylinder(10,diam/2+folga*i+2,diam/2+folga*i+2,$fn=res);
        #cylinder(10,diam/2+folga*i,diam/2+folga*i,$fn=res);
    }
}

for(i=[20:1:29]){
    translate([6*(i-20)+diam*(i-20)+folga*(i-20),(6+diam+folga+1)*2,0])
    difference(){
        cylinder(10,diam/2+folga*i+2,diam/2+folga*i+2,$fn=res);
        #cylinder(10,diam/2+folga*i,diam/2+folga*i,$fn=res);
    }
}

for(i=[30:1:40]){
    translate([6*(i-30)+diam*(i-30)+folga*(i-30),(6+diam+folga+1)*3,0])
    difference(){
        cylinder(10,diam/2+folga*i+2,diam/2+folga*i+2,$fn=res);
        #cylinder(10,diam/2+folga*i,diam/2+folga*i,$fn=res);
    }
}
