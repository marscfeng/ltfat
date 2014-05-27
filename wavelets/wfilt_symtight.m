function [h,g,a,info] = wfilt_symtight(N)
%WFILT_SYMORTH  Symmetric nearly-orthogonal and orthogonal nearly-symmetric
%
%   Usage: [h,g,a] = wfilt_symorth(N);
%
%   `[h,g,a]=wfilt_symorth(N)` with *N\in {1,2,3}*
%
%   Examples:
%   ---------
%   :::
%     figure(1);
%     wfiltinfo('ana:symds1');
%     figure(2);
%     wfiltinfo('syn:symds1');
% 
%   References: abdelnour2004
%

info.istight = 1;
a = [2;2;2;2];

switch(N)
 case 1
    % Example 1. from the reference.   
    hlp = [
        -0.00052277114224  -0.00033767136406    
        -0.01132578895076   0.01854042113559
        -0.03673606302189  -0.02613107863916     
         0.00608048256466  -0.21256591159938 
         0.23533603943029  -0.12220989795770
         0.51430488230650   0.34270413842472
         0.51430488230650   0.34270413842472
         0.23533603943029  -0.12220989795770
         0.00608048256466  -0.21256591159938
        -0.03673606302189  -0.02613107863916
        -0.01132578895076   0.01854042113559
        -0.00052277114224  -0.00033767136406
    ];

    harr = [hlp, ...
            (-1).^(0:size(hlp,1)-1).'.*hlp(:,2),...
            (-1).^(0:size(hlp,1)-1).'.*hlp(:,1)];
        garr = harr;


   
  otherwise
        error('%s: No such filters.',upper(mfilename)); 

end

h=mat2cell(harr,size(harr,1),ones(1,size(harr,2)));
g=mat2cell(garr,size(garr,1),ones(1,size(garr,2)));


